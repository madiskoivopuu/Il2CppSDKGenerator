#pragma once
#include <Il2Cpp/Il2Cpp.h>

class TavernBoardWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "TavernBoardWindowHelper"));
	}


	template <typename R = TavernBoardWindow*> static R ShowTavernBoard(UIWindowsManager* manager, int32_t targetId) {
		return ((R (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x16AC588))(0, manager, targetId);
	}
	template <typename R = TavernBoardWindow*> static R ShowTavernBoard_1(UIWindowsManager* manager, DialogueEntity* dialogueEntity) {
		return ((R (*)(void *, UIWindowsManager*, DialogueEntity*))(Il2CppBase() + 0x16AC634))(0, manager, dialogueEntity);
	}
	template <typename R = TavernBoardWindow*> static R GetTavernBoard(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0x16AC774))(0, manager);
	}
	template <typename R = bool> static R CloseTavernBoard(UIWindowsManager* manager, int32_t targetId) {
		return ((R (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0x16AC7E8))(0, manager, targetId);
	}

};

