#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerClassSlot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerClassSlot"));
	}

	template <typename T = uintptr_t> T& _button() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& _defaultIcon() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _defaultColor() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _defaultFrameColor() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _icon() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = uintptr_t> T& _frameRarityIcon() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = uintptr_t> T& _tooltipProxy() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = uintptr_t> T& _iconNotify() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = Il2CppString*> T& _className() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = uintptr_t> T& ClassEntity() {
		return *(T*)((uintptr_t)this + 0x70);
	}
	template <typename T = void*> T& ClickEvent() {
		return *(T*)((uintptr_t)this + 0x78);
	}

	template <typename T = uintptr_t> T get_ClassEntity() {
		return ((T (*)(PlayerClassSlot*))(Il2CppBase() + 0x1B73B1C))(this);
	}
	template <typename T = void> T set_ClassEntity(uintptr_t value) {
		return ((T (*)(PlayerClassSlot*, uintptr_t))(Il2CppBase() + 0x1B73B24))(this, value);
	}
	template <typename T = void> T add_ClickEvent(void* value) {
		return ((T (*)(PlayerClassSlot*, void*))(Il2CppBase() + 0x1B73B2C))(this, value);
	}
	template <typename T = void> T remove_ClickEvent(void* value) {
		return ((T (*)(PlayerClassSlot*, void*))(Il2CppBase() + 0x1B73BCC))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(PlayerClassSlot*))(Il2CppBase() + 0x1B73C6C))(this);
	}
	template <typename T = void> T Clean() {
		return ((T (*)(PlayerClassSlot*))(Il2CppBase() + 0x1B73D78))(this);
	}
	template <typename T = void> T Init(uintptr_t tooltipView) {
		return ((T (*)(PlayerClassSlot*, uintptr_t))(Il2CppBase() + 0x1B73DAC))(this, tooltipView);
	}
	template <typename T = uintptr_t> T GetItemEntity() {
		return ((T (*)(PlayerClassSlot*))(Il2CppBase() + 0x1B73DC8))(this);
	}
	template <typename T = void> T UpdateView(uintptr_t avatar) {
		return ((T (*)(PlayerClassSlot*, uintptr_t))(Il2CppBase() + 0x1B73DD0))(this, avatar);
	}
	template <typename T = void> T UpdateClassNotify() {
		return ((T (*)(PlayerClassSlot*))(Il2CppBase() + 0x1B74058))(this);
	}
	template <typename T = void> T Awakeb__16_0() {
		return ((T (*)(PlayerClassSlot*))(Il2CppBase() + 0x1B74244))(this);
	}

};

}
