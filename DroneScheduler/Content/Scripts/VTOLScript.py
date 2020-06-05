import unreal_engine as ue
from time import sleep
import json
from pathlib import Path
import time

class VTOL_BP:
	def begin_play(self):
		FilePath = Path(__file__).parents[2]
		timestr = time.strftime("%Y.%m.%d-%H.%M.%S")
		FileName = "LogFiles\Log-" + timestr + ".txt"
		global FullFile
		FullFile = Path(FilePath, FileName)
		#print(FullFile)
		#global File 
		#File = open(FullFile, "w+")

	def SaveText(self, text):
		StringText = text.replace('\\n', '\n')
		#StringText = str(text)
		File = open(FullFile, "a")
		File.write(StringText)
		File.write('\n')
		File.close()
