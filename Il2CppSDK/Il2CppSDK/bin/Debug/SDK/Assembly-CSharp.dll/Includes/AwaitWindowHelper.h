#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AwaitWindowHelper
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AwaitWindowHelper"));
	}


	template <typename T = AwaitWindow*> static T ShowAwait(UIWindowsManager* manager, Il2CppString* imageAssetPath, uintptr_t onSelfClose, uintptr_t onTimeOutClose, float timeOut) {
		return ((T (*)(void *, UIWindowsManager*, Il2CppString*, uintptr_t, uintptr_t, float))(Il2CppBase() + 0xFB9F10))(0, manager, imageAssetPath, onSelfClose, onTimeOutClose, timeOut);
	}
	template <typename T = bool> static T CloseAwait(UIWindowsManager* manager) {
		return ((T (*)(void *, UIWindowsManager*))(Il2CppBase() + 0xFBA194))(0, manager);
	}

};

