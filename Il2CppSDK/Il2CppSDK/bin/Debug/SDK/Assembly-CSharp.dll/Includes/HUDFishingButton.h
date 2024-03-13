#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HUDFishingButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HUDFishingButton"));
	}

	template <typename T = uintptr_t> T& _button() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _ring() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _chargedMark() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = float> T& _oscillationToScaleCoef() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = InputButton*> T& _inputButton() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = InputEntity*> T& _inputEntity() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = IUIWindow*> T& _window() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Nullable1bool>*> T& _lastGameInputIsEnabled() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(HUDFishingButton*))(Il2CppBase() + 0x1453054))(this);
	}
	template <typename T = void> T Bind(IUIWindow* window) {
		return ((T (*)(HUDFishingButton*, IUIWindow*))(Il2CppBase() + 0x14530F0))(this, window);
	}
	template <typename T = void> T Unbind() {
		return ((T (*)(HUDFishingButton*))(Il2CppBase() + 0x145339C))(this);
	}
	template <typename T = void> T OnUpdateInput(float deltaTime) {
		return ((T (*)(HUDFishingButton*, float))(Il2CppBase() + 0x1453584))(this, deltaTime);
	}
	template <typename T = bool> T GameInputIsEnabled() {
		return ((T (*)(HUDFishingButton*))(Il2CppBase() + 0x14538E4))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(HUDFishingButton*, float))(Il2CppBase() + 0x1453B40))(this, deltaTime);
	}
	template <typename T = void> T SetEnable(bool value) {
		return ((T (*)(HUDFishingButton*, bool))(Il2CppBase() + 0x1453F80))(this, value);
	}

};

