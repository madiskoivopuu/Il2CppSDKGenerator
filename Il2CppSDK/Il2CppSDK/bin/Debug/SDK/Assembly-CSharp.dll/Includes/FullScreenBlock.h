#pragma once
#include <Il2Cpp/Il2Cpp.h>

class FullScreenBlock
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "FullScreenBlock"));
	}

	template <typename R = Il2CppArray<uintptr_t>*> R& _cameras() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = UIWindowsManager*> R& _hud() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = bool> R& _renderOff() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppArray<int32_t>*> R& _camerasMask() {
		return *(R*)((uintptr_t)this + 0x30);
	}

	template <typename R = void> R SetHud(UIWindowsManager* hud) {
		return ((R (*)(FullScreenBlock*, UIWindowsManager*))(Il2CppBase() + 0x15FF0C4))(this, hud);
	}
	template <typename R = void> R Update() {
		return ((R (*)(FullScreenBlock*))(Il2CppBase() + 0x15FF0CC))(this);
	}

};

