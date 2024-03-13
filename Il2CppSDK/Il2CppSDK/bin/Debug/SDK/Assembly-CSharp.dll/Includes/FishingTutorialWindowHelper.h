#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FishingTutorialWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FishingTutorialWindowHelper"));
	}


	template <typename T = FishingTutorialWindow*> static T ShowFishingTutorial(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x15F7034))(0, manager);
	}

};

