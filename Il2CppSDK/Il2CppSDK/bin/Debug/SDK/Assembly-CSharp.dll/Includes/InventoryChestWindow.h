#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class InventoryChestWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "InventoryChestWindow"));
	}

	template <typename T = int64_t> static T& WARNING_TIMEOUT() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& _closeBtn() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _captionText() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& _chestImage() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& _descriptionText() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = RewardResourceView*> T& _keySlot() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = StandartButton*> T& _openWithKeyButton() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = StandartButton*> T& _openWithoutKeyButton() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = StandartButton*> T& _cancelButton() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = uintptr_t> T& _openWithKeyImage() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = uintptr_t> T& _openWithoutKeyImage() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = uintptr_t> T& _grayscaleMaterial() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = bool> T& _requestSend() {
		return *(T*)((uintptr_t)this + 0xD0);
	}
	template <typename T = int64_t> T& _warningTimeOut() {
		return *(T*)((uintptr_t)this + 0xD8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(InventoryChestWindow*))(Il2CppBase() + 0x146C9C8))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(InventoryChestWindow*))(Il2CppBase() + 0x146CB6C))(this);
	}
	template <typename T = void> T CloseButtonClicked() {
		return ((T (*)(InventoryChestWindow*))(Il2CppBase() + 0x146D8AC))(this);
	}
	template <typename T = void> T OpenButtonClick(bool withKey) {
		return ((T (*)(InventoryChestWindow*, bool))(Il2CppBase() + 0x146D8B4))(this, withKey);
	}
	template <typename T = void> T OnReceivedInventoryContainerResult(OpenInventoryContainerResult* result) {
		return ((T (*)(InventoryChestWindow*, OpenInventoryContainerResult*))(Il2CppBase() + 0x146E8A0))(this, result);
	}
	template <typename T = void> T Awakeb__15_0() {
		return ((T (*)(InventoryChestWindow*))(Il2CppBase() + 0x146EC1C))(this);
	}
	template <typename T = void> T Awakeb__15_1() {
		return ((T (*)(InventoryChestWindow*))(Il2CppBase() + 0x146EC24))(this);
	}

};

