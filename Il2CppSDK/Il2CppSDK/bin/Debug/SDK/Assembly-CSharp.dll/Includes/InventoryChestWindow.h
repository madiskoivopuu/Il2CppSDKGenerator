#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class InventoryChestWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InventoryChestWindow"));
	}

	template <typename R = int64_t> static R& WARNING_TIMEOUT() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = uintptr_t> R& _closeBtn() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& _captionText() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& _chestImage() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& _descriptionText() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = RewardResourceView*> R& _keySlot() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = StandartButton*> R& _openWithKeyButton() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = StandartButton*> R& _openWithoutKeyButton() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = StandartButton*> R& _cancelButton() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = uintptr_t> R& _openWithKeyImage() {
		return *(R*)((uintptr_t)this + 0xB8);
	}
	template <typename R = uintptr_t> R& _openWithoutKeyImage() {
		return *(R*)((uintptr_t)this + 0xC0);
	}
	template <typename R = uintptr_t> R& _grayscaleMaterial() {
		return *(R*)((uintptr_t)this + 0xC8);
	}
	template <typename R = bool> R& _requestSend() {
		return *(R*)((uintptr_t)this + 0xD0);
	}
	template <typename R = int64_t> R& _warningTimeOut() {
		return *(R*)((uintptr_t)this + 0xD8);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(InventoryChestWindow*))(Il2CppBase() + 0x146C9C8))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(InventoryChestWindow*))(Il2CppBase() + 0x146CB6C))(this);
	}
	template <typename R = void> R CloseButtonClicked() {
		return ((R (*)(InventoryChestWindow*))(Il2CppBase() + 0x146D8AC))(this);
	}
	template <typename R = void> R OpenButtonClick(bool withKey) {
		return ((R (*)(InventoryChestWindow*, bool))(Il2CppBase() + 0x146D8B4))(this, withKey);
	}
	template <typename R = void> R OnReceivedInventoryContainerResult(OpenInventoryContainerResult* result) {
		return ((R (*)(InventoryChestWindow*, OpenInventoryContainerResult*))(Il2CppBase() + 0x146E8A0))(this, result);
	}
	template <typename R = void> R Awakeb__15_0() {
		return ((R (*)(InventoryChestWindow*))(Il2CppBase() + 0x146EC1C))(this);
	}
	template <typename R = void> R Awakeb__15_1() {
		return ((R (*)(InventoryChestWindow*))(Il2CppBase() + 0x146EC24))(this);
	}

};

