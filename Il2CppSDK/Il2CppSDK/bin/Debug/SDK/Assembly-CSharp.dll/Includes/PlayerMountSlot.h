#pragma once
#include <Il2Cpp/Il2Cpp.h>

class PlayerMountSlot
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerMountSlot"));
	}

	template <typename T = uintptr_t> T& _button() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _icon() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppString*> T& _defaultIcon() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _defaultColor() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _activeMark() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _tooltipProxy() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& _mountName() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppString*> T& _activeMagic() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = bool> T& _init() {
		return *(T*)((uintptr_t)this + 0x60);
	}
	template <typename T = uintptr_t> T& MountEntity() {
		return *(T*)((uintptr_t)this + 0x68);
	}
	template <typename T = void*> T& ClickEvent() {
		return *(T*)((uintptr_t)this + 0x70);
	}

	template <typename T = uintptr_t> T get_MountEntity() {
		return ((T (*)(PlayerMountSlot*))(Il2CppBase() + 0x156B918))(this);
	}
	template <typename T = void> T set_MountEntity(uintptr_t value) {
		return ((T (*)(PlayerMountSlot*, uintptr_t))(Il2CppBase() + 0x156B920))(this, value);
	}
	template <typename T = void> T add_ClickEvent(void* value) {
		return ((T (*)(PlayerMountSlot*, void*))(Il2CppBase() + 0x156B928))(this, value);
	}
	template <typename T = void> T remove_ClickEvent(void* value) {
		return ((T (*)(PlayerMountSlot*, void*))(Il2CppBase() + 0x156B9C8))(this, value);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(PlayerMountSlot*))(Il2CppBase() + 0x156BA68))(this);
	}
	template <typename T = void> T Clean() {
		return ((T (*)(PlayerMountSlot*))(Il2CppBase() + 0x156BB74))(this);
	}
	template <typename T = void> T Init(uintptr_t tooltipView) {
		return ((T (*)(PlayerMountSlot*, uintptr_t))(Il2CppBase() + 0x156BBD4))(this, tooltipView);
	}
	template <typename T = uintptr_t> T GetItemEntity() {
		return ((T (*)(PlayerMountSlot*))(Il2CppBase() + 0x156BBF0))(this);
	}
	template <typename T = void> T UpdateView(uintptr_t avatar) {
		return ((T (*)(PlayerMountSlot*, uintptr_t))(Il2CppBase() + 0x156BBF8))(this, avatar);
	}
	template <typename T = void> T Awakeb__16_0() {
		return ((T (*)(PlayerMountSlot*))(Il2CppBase() + 0x156C05C))(this);
	}

};

}
