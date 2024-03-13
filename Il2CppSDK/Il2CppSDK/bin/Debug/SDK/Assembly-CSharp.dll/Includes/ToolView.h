#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ToolView
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ToolView"));
	}

	template <typename T = Il2CppArray<uintptr_t>*> T& MainRenderers() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& Fxs() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& SocketFxs() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = AnimatorEffects*> T& AnimatorEffects() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = DestroyHelper*> T& DestroyHelper() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = bool> T& _fxsActive() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = bool> T& _started() {
		return *(T*)((uintptr_t)this + 0x41);
	}
	template <typename T = HideHelper*> T& _hideHelper() {
		return *(T*)((uintptr_t)this + 0x48);
	}

	template <typename T = void> T Setup(HideHelper* hideHelper) {
		return ((T (*)(ToolView*, HideHelper*))(Il2CppBase() + 0x14F374C))(this, hideHelper);
	}
	template <typename T = void> T Start() {
		return ((T (*)(ToolView*))(Il2CppBase() + 0x14F3814))(this);
	}
	template <typename T = void> T SetFxActive(Il2CppString* name, bool active) {
		return ((T (*)(ToolView*, Il2CppString*, bool))(Il2CppBase() + 0x14F3A60))(this, name, active);
	}
	template <typename T = void> T SetFxsActive(bool active) {
		return ((T (*)(ToolView*, bool))(Il2CppBase() + 0x14F3B8C))(this, active);
	}
	template <typename T = void> T DublicateMaterial() {
		return ((T (*)(ToolView*))(Il2CppBase() + 0x14F3D98))(this);
	}
	template <typename T = void> T OnDisable() {
		return ((T (*)(ToolView*))(Il2CppBase() + 0x14F3E84))(this);
	}
	template <typename T = void> T OnEnable() {
		return ((T (*)(ToolView*))(Il2CppBase() + 0x14F3F80))(this);
	}
	template <typename T = void> T OnDestroy() {
		return ((T (*)(ToolView*))(Il2CppBase() + 0x14F40D8))(this);
	}

};

