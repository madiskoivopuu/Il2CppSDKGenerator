#pragma once
#include <Il2Cpp/Il2Cpp.h>

class CollectionWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "CollectionWindowHelper"));
	}


	template <typename R = CollectionWindow*> static R GetCollectionWindow(UIWindowsManager* manager) {
		return ((R (*)(void *, UIWindowsManager*))(Il2CppBase() + 0xE237C4))(0, manager);
	}
	template <typename R = CollectionWindow*> static R ShowCollectionWindow(UIWindowsManager* manager, int32_t targetId) {
		return ((R (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0xE2385C))(0, manager, targetId);
	}
	template <typename R = void> static R CloseCollectionWindow(UIWindowsManager* manager, int32_t targetId) {
		return ((R (*)(void *, UIWindowsManager*, int32_t))(Il2CppBase() + 0xE23928))(0, manager, targetId);
	}

};
