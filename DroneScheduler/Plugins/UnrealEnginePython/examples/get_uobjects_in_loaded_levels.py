import unreal_engine as ue
from unreal_engine.classes import Object, Blueprint

levels = []
level_packages = []

# get all loaded worlds
for world in ue.all_worlds():
    # retrieve the world levels (first persistent then streaming)
    levels.append(world.PersistentLevel)
    level_packages.append(world.PersistentLevel.get_outermost())

    for streaming_level in world.StreamingLevels:
        if streaming_level.LoadedLevel is not None:
            levels.append(streaming_level.LoadedLevel)
            level_packages.append(streaming_level.LoadedLevel.get_outermost())

found_uobjects = []

# iterate all the loaded uobjects
for uobject in ue.tobject_iterator(Object):
    # compare outermosts
    if uobject.get_outermost() in level_packages:
        # recursively check outers of object to find
        # the ones contained in a level
        outer = uobject.get_outer()
        while outer:
            if outer in levels:
                 found_uobjects.append(outer)
                 # check if the uobject has been generated by a blueprint
                 # in such a case add the blueprint too
                 generator = outer.get_class().class_generated_by()
                 if generator and generator.is_a(Blueprint):
                     found_uobjects.append(generator)
            outer = outer.get_outer()

print(found_uobjects)
