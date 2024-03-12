#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClassFilterButton
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClassFilterButton"));
	}

	template <typename T = uintptr_t> T& _button() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _icon() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _filterName() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& _filterKey() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _notificationMarker() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _enabledColor() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _disabledColor() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = bool> T& _isActive() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = int32_t> T& _notSeenCount() {
		return *(T*)((uintptr_t)this + 0x64);
	}
	template <typename T = void*> T& OnButtonClick() {
		return *(T*)((uintptr_t)this + 0x68);
	}

	template <typename T = bool> T get_IsActive() {
		return ((T (*)(ClassFilterButton*))(Il2CppBase() + 0x1599670))(this);
	}
	template <typename T = Il2CppString*> T get_FilterName() {
		return ((T (*)(ClassFilterButton*))(Il2CppBase() + 0x1599678))(this);
	}
	template <typename T = void> T add_OnButtonClick(void* value) {
		return ((T (*)(ClassFilterButton*, void*))(Il2CppBase() + 0x1599680))(this, value);
	}
	template <typename T = void> T remove_OnButtonClick(void* value) {
		return ((T (*)(ClassFilterButton*, void*))(Il2CppBase() + 0x1599720))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(ClassFilterButton*))(Il2CppBase() + 0x15997C0))(this);
	}
	template <typename T = void> T OnClick() {
		return ((T (*)(ClassFilterButton*))(Il2CppBase() + 0x1599A98))(this);
	}
	template <typename T = void> T UpdateView() {
		return ((T (*)(ClassFilterButton*))(Il2CppBase() + 0x1599864))(this);
	}
	template <typename T = void> T UpdateNotification(bool isOn) {
		return ((T (*)(ClassFilterButton*, bool))(Il2CppBase() + 0x1599B40))(this, isOn);
	}

};

}
