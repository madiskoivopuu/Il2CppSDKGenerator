#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TrophyPedestalHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TrophyPedestalHelper"));
	}


	template <typename R = TrophyPedestalWindow*> static R ShowTrophyPedestal(UIWindowsManager* manager, int32_t targetId) {
		return ((R (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x1527EF8))(0, manager, targetId);
	}
	template <typename R = void> static R CloseTrophyPedestal(UIWindowsManager* manager, int32_t targetId) {
		return ((R (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x1527FC4))(0, manager, targetId);
	}

};

