#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class PlayerClassSelectWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerClassSelectWindow"));
	}

	template <typename R = uintptr_t> R& _closeBtn() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& _selectBtn() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& _container() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = PlayerClassView*> R& _classViewPrefab() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	 Il2CppDictionary<Il2CppString*, PlayerClassView*>*& _classViews() {
		return *(Il2CppDictionary<Il2CppString*, PlayerClassView*>**)((uintptr_t)this + 0x98);
	}
	template <typename R = PlayerClassView*> R& _seletedView() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = int64_t> R& _playerId() {
		return *(R*)((uintptr_t)this + 0xA8);
	}

	template <typename R = void> R Awake() {
		return ((R (*)(PlayerClassSelectWindow*))(Il2CppBase() + 0x1B71E3C))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(PlayerClassSelectWindow*))(Il2CppBase() + 0x1B71F18))(this);
	}
	template <typename R = void> R OnClassViewClick(PlayerClassView* view) {
		return ((R (*)(PlayerClassSelectWindow*, PlayerClassView*))(Il2CppBase() + 0x1B73578))(this, view);
	}
	template <typename R = bool> R CanProgressClass(GameEntity* avatar, PlayerClassView* view) {
		return ((R (*)(PlayerClassSelectWindow*, GameEntity*, PlayerClassView*))(Il2CppBase() + 0x1B73298))(this, avatar, view);
	}
	template <typename R = int32_t> R ClassPriority(ItemEntity* classEntity) {
		return ((R (*)(PlayerClassSelectWindow*, ItemEntity*))(Il2CppBase() + 0x1B73724))(this, classEntity);
	}
	template <typename R = void> R OnClose() {
		return ((R (*)(PlayerClassSelectWindow*))(Il2CppBase() + 0x1B738E8))(this);
	}
	template <typename R = void> R OnSelectClick() {
		return ((R (*)(PlayerClassSelectWindow*))(Il2CppBase() + 0x1B73998))(this);
	}
	template <typename R = int32_t> R OnShowb__9_0(ItemEntity* c) {
		return ((R (*)(PlayerClassSelectWindow*, ItemEntity*))(Il2CppBase() + 0x1B73B18))(this, c);
	}

};

