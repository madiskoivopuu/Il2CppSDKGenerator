#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ToolView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ToolView"));
	}

	template <typename R = Il2CppArray<uintptr_t>*> R& MainRenderers() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppArray<uintptr_t>*> R& Fxs() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = Il2CppArray<SocketFx*>*> R& SocketFxs() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = AnimatorEffects*> R& AnimatorEffects() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = DestroyHelper*> R& DestroyHelper() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = bool> R& _fxsActive() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = bool> R& _started() {
		return *(R*)((uintptr_t)this + 0x41);
	}
	template <typename R = HideHelper*> R& _hideHelper() {
		return *(R*)((uintptr_t)this + 0x48);
	}

	template <typename R = void> R Setup(HideHelper* hideHelper) {
		return ((R (*)(ToolView*, HideHelper*))(Il2CppBase() + 0x14F374C))(this, hideHelper);
	}
	template <typename R = void> R Start() {
		return ((R (*)(ToolView*))(Il2CppBase() + 0x14F3814))(this);
	}
	template <typename R = void> R SetFxActive(Il2CppString* name, bool active) {
		return ((R (*)(ToolView*, Il2CppString*, bool))(Il2CppBase() + 0x14F3A60))(this, name, active);
	}
	template <typename R = void> R SetFxsActive(bool active) {
		return ((R (*)(ToolView*, bool))(Il2CppBase() + 0x14F3B8C))(this, active);
	}
	template <typename R = void> R DublicateMaterial() {
		return ((R (*)(ToolView*))(Il2CppBase() + 0x14F3D98))(this);
	}
	template <typename R = void> R OnDisable() {
		return ((R (*)(ToolView*))(Il2CppBase() + 0x14F3E84))(this);
	}
	template <typename R = void> R OnEnable() {
		return ((R (*)(ToolView*))(Il2CppBase() + 0x14F3F80))(this);
	}
	template <typename R = void> R OnDestroy() {
		return ((R (*)(ToolView*))(Il2CppBase() + 0x14F40D8))(this);
	}

};

