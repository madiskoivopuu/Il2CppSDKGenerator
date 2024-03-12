#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow`1" 

class LandChoiceWindow: UIWindow1
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LandChoiceWindow"));
	}

	template <typename T = uintptr_t> T& _icon() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _animator() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& _playerName() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& _messageText() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = uintptr_t> T& _attentionText() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& _closeBtn() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = uintptr_t> T& _acceptBtn() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _lands() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = int32_t> T& _selectedIndex() {
		return *(T*)((uintptr_t)this + 0xB8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(LandChoiceWindow*))(Il2CppBase() + 0x1427ABC))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(LandChoiceWindow*))(Il2CppBase() + 0x1427BA8))(this);
	}
	template <typename T = void> T OnUpdateDraw(float deltaTime) {
		return ((T (*)(LandChoiceWindow*, float))(Il2CppBase() + 0x1428768))(this, deltaTime);
	}
	template <typename T = void> T OnLandClick(int32_t index) {
		return ((T (*)(LandChoiceWindow*, int32_t))(Il2CppBase() + 0x1428248))(this, index);
	}
	template <typename T = void*> T CanAccept(uintptr_t dialogue) {
		return ((T (*)(LandChoiceWindow*, uintptr_t))(Il2CppBase() + 0x1428E50))(this, dialogue);
	}
	template <typename T = void> T OnAcceptButtonClick() {
		return ((T (*)(LandChoiceWindow*))(Il2CppBase() + 0x1429244))(this);
	}
	template <typename T = void> T NotifyServerAndClose() {
		return ((T (*)(LandChoiceWindow*))(Il2CppBase() + 0x142812C))(this);
	}

};

}
