#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TavernBoardWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TavernBoardWindowHelper"));
	}


	template <typename T = TavernBoardWindow*> static T ShowTavernBoard(UIWindowsManager* manager, int32_t targetId) {
		return ((T (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x16AC588))(0, manager, targetId);
	}
	template <typename T = TavernBoardWindow*> static T ShowTavernBoard_1(UIWindowsManager* manager, DialogueEntity* dialogueEntity) {
		return ((T (*)(void *, UIWindowsManager*, DialogueEntity*))(Il2CppBase() + 0x16AC634))(0, manager, dialogueEntity);
	}
	template <typename T = TavernBoardWindow*> static T GetTavernBoard(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x16AC774))(0, manager);
	}
	template <typename T = bool> static T CloseTavernBoard(UIWindowsManager* manager, int32_t targetId) {
		return ((T (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x16AC7E8))(0, manager, targetId);
	}

};

