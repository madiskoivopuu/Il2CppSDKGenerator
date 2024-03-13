#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class PlayerClassSelectWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerClassSelectWindow"));
	}

	template <typename T = uintptr_t> T& _closeBtn() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _selectBtn() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& _container() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = PlayerClassView*> T& _classViewPrefab() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, PlayerClassView*>*> T& _classViews() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = PlayerClassView*> T& _seletedView() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = int64_t> T& _playerId() {
		return *(T*)((uintptr_t)this + 0xA8);
	}

	template <typename T = void> T Awake() {
		return ((T (*)(PlayerClassSelectWindow*))(Il2CppBase() + 0x1B71E3C))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(PlayerClassSelectWindow*))(Il2CppBase() + 0x1B71F18))(this);
	}
	template <typename T = void> T OnClassViewClick(PlayerClassView* view) {
		return ((T (*)(PlayerClassSelectWindow*, PlayerClassView*))(Il2CppBase() + 0x1B73578))(this, view);
	}
	template <typename T = bool> T CanProgressClass(GameEntity* avatar, PlayerClassView* view) {
		return ((T (*)(PlayerClassSelectWindow*, GameEntity*, PlayerClassView*))(Il2CppBase() + 0x1B73298))(this, avatar, view);
	}
	template <typename T = int32_t> T ClassPriority(ItemEntity* classEntity) {
		return ((T (*)(PlayerClassSelectWindow*, ItemEntity*))(Il2CppBase() + 0x1B73724))(this, classEntity);
	}
	template <typename T = void> T OnClose() {
		return ((T (*)(PlayerClassSelectWindow*))(Il2CppBase() + 0x1B738E8))(this);
	}
	template <typename T = void> T OnSelectClick() {
		return ((T (*)(PlayerClassSelectWindow*))(Il2CppBase() + 0x1B73998))(this);
	}
	template <typename T = int32_t> T OnShowb__9_0(ItemEntity* c) {
		return ((T (*)(PlayerClassSelectWindow*, ItemEntity*))(Il2CppBase() + 0x1B73B18))(this, c);
	}

};

