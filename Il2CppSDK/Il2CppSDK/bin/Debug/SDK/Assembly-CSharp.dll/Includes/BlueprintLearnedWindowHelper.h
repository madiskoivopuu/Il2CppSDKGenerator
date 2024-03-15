#pragma once
#include <Il2Cpp/Il2Cpp.h>

class BlueprintLearnedWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "BlueprintLearnedWindowHelper"));
	}


	template <typename R = BlueprintLearnedWindow*> static R ShowBlueprintLearned(UIWindowsManager* manager, Il2CppString* blueprintName) {
		return ((R (*)(void *, UIWindowsManager*, Il2CppString*))(Il2CppBase() + 0x16C1DB0))(0, manager, blueprintName);
	}

};

