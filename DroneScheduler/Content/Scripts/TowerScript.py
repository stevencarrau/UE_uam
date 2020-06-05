import unreal_engine as ue
from time import sleep
import json
from pathlib import Path

def dict_compare(d1, d2):
	d1_keys = set(d1.keys())
	d2_keys = set(d2.keys())
	intersect_keys = d1_keys.intersection(d2_keys)
	added = d1_keys - d2_keys
	removed = d2_keys - d1_keys
	modified = {o : (d1[o], d2[o]) for o in intersect_keys if d1[o] != d2[o]}
	same = set(o for o in intersect_keys if d1[o] == d2[o])
	return added, removed, modified, same

class ControlTower:
	def begin_play(self):
		FilePath = Path(__file__).resolve().parents[0]
		FileName = "request_handler_example_readable2.json"
		FullFile = Path(FilePath, FileName)
		print(FullFile)
		File = open(FullFile)
		global FileDict
		FileDict = json.load(File)

	def Update(self):
		tower = self.uobject.getowner()
		towerName = tower.get_name()
		TimeState = tower.get_property('TimeState')
		CurrentState = tower.get_property('State')
		Successors = tower.get_property('Successors')
		if not Successors:
			automaton = FileDict
		else:	
			SuccessorValues = [FileDict[str(x)] for x in Successors]
			automaton = dict(zip(Successors, SuccessorValues))

		states = []
		for s in automaton:
			added, removed, modified, same = dict_compare(automaton[s]['State'], CurrentState)
			if len(modified) == 0:
				#states.add(s)
				states.append(s)
				break
		
		'''
		print(" ")
		print(towerName + " - Time State: " + str(TimeState))
		print("------------------------------------------------")
		print("Current State:")
		print(CurrentState)
		'''

		if not states:
			print("Can't find next successor, current successor:")
			#print(Successors)
		else:
			#print("Picked State:")
			#print(states)
			#print("Successors")
			StateVal = []
			if not Successors:
				StateVal = str(states[0])
			else:	
				StateVal = states[0]

			Successors = automaton[states[0]]['Successors']

			available = ["a" + str(x) for x in range(tower.get_property('MaxAvailable'))]
			LandingAircraft = [automaton[states[0]]['State'][str(x)] for x in available]
			tower.set_property('Successors', Successors)
			tower.set_property('LandingAircraft', LandingAircraft)

			#print(Successors)
			#print("Landing Aircraft")
			#print(LandingAircraft)

			#print(" ")
			tower.call('ApproveAircraft')
