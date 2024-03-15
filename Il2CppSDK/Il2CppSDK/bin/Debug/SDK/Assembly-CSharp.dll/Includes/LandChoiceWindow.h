#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class LandChoiceWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LandChoiceWindow"));
	}

	template <typename R = uintptr_t> R& _icon() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& _animator() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& _playerName() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& _messageText() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = uintptr_t> R& _attentionText() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& _closeBtn() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = uintptr_t> R& _acceptBtn() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	template <typename R = Il2CppArray<LandView*>*> R& _lands() {
		return *(R*)((uintptr_t)this + 0xB0);
	}
	template <typename R = int32_t> R& _selectedIndex() {
		return *(R*)((uintptr_t)this + 0xB8);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(LandChoiceWindow*))(Il2CppBase() + 0x1427ABC))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(LandChoiceWindow*))(Il2CppBase() + 0x1427BA8))(this);
	}
	template <typename R = void> R OnUpdateDraw(float deltaTime) {
		return ((R (*)(LandChoiceWindow*, float))(Il2CppBase() + 0x1428768))(this, deltaTime);
	}
	template <typename R = void> R OnLandClick(int32_t index) {
		return ((R (*)(LandChoiceWindow*, int32_t))(Il2CppBase() + 0x1428248))(this, index);
	}
	 ValueTuple2bool, Il2CppString*>* CanAccept(DialogueEntity* dialogue) {
		return ((ValueTuple2bool, Il2CppString*>* (*)(LandChoiceWindow*, DialogueEntity*))(Il2CppBase() + 0x1428E50))(this, dialogue);
	}
	template <typename R = void> R OnAcceptButtonClick() {
		return ((R (*)(LandChoiceWindow*))(Il2CppBase() + 0x1429244))(this);
	}
	template <typename R = void> R NotifyServerAndClose() {
		return ((R (*)(LandChoiceWindow*))(Il2CppBase() + 0x142812C))(this);
	}

};

