#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class PlayerClassQuickSwitchWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerClassQuickSwitchWindow"));
	}

	template <typename R = uintptr_t> R& _closeBtn() {
		return *(R*)((uintptr_t)this + 0x78);
	}
	template <typename R = uintptr_t> R& _acceptBtn() {
		return *(R*)((uintptr_t)this + 0x80);
	}
	template <typename R = uintptr_t> R& _resetBtn() {
		return *(R*)((uintptr_t)this + 0x88);
	}
	template <typename R = uintptr_t> R& _container() {
		return *(R*)((uintptr_t)this + 0x90);
	}
	template <typename R = PlayerClassSwitchView*> R& _classViewPrefab() {
		return *(R*)((uintptr_t)this + 0x98);
	}
	template <typename R = uintptr_t> R& _classSelectedCount() {
		return *(R*)((uintptr_t)this + 0xA0);
	}
	template <typename R = Il2CppArray<ClassFilterButton*>*> R& _classFilterButtons() {
		return *(R*)((uintptr_t)this + 0xA8);
	}
	 Il2CppDictionary<Il2CppString*, PlayerClassSwitchView*>*& _classViews() {
		return *(Il2CppDictionary<Il2CppString*, PlayerClassSwitchView*>**)((uintptr_t)this + 0xB0);
	}
	 Il2CppDictionary<Il2CppString*, PlayerClassSwitchView*>*& _selectedClassViews() {
		return *(Il2CppDictionary<Il2CppString*, PlayerClassSwitchView*>**)((uintptr_t)this + 0xB8);
	}
	 Il2CppList<Il2CppString*>*& _activeFilters() {
		return *(Il2CppList<Il2CppString*>**)((uintptr_t)this + 0xC0);
	}
	 Il2CppList<Il2CppString*>*& _selectedClasses() {
		return *(Il2CppList<Il2CppString*>**)((uintptr_t)this + 0xC8);
	}
	template <typename R = int64_t> R& _playerId() {
		return *(R*)((uintptr_t)this + 0xD0);
	}

	template <typename R = bool> R get__isLimitNotReached() {
		return ((R (*)(PlayerClassQuickSwitchWindow*))(Il2CppBase() + 0x1B68414))(this);
	}
	template <typename R = void> R Awake() {
		return ((R (*)(PlayerClassQuickSwitchWindow*))(Il2CppBase() + 0x1B68494))(this);
	}
	template <typename R = void> R OnShow() {
		return ((R (*)(PlayerClassQuickSwitchWindow*))(Il2CppBase() + 0x1B685C4))(this);
	}
	template <typename R = void> R OnReset() {
		return ((R (*)(PlayerClassQuickSwitchWindow*))(Il2CppBase() + 0x1B697EC))(this);
	}
	template <typename R = void> R OnClassViewClick(Il2CppString* viewBlueprint, bool isOn) {
		return ((R (*)(PlayerClassQuickSwitchWindow*, Il2CppString*, bool))(Il2CppBase() + 0x1B69AB0))(this, viewBlueprint, isOn);
	}
	template <typename R = void> R CheckLimitReached() {
		return ((R (*)(PlayerClassQuickSwitchWindow*))(Il2CppBase() + 0x1B69678))(this);
	}
	template <typename R = void> R OnFilterButtonClick(ClassFilterButton* filter) {
		return ((R (*)(PlayerClassQuickSwitchWindow*, ClassFilterButton*))(Il2CppBase() + 0x1B69F24))(this, filter);
	}
	template <typename R = void> R CollectionFilter(Il2CppDictionary<Il2CppString*, PlayerClassSwitchView*>* classViews) {
		return ((R (*)(PlayerClassQuickSwitchWindow*, Il2CppDictionary<Il2CppString*, PlayerClassSwitchView*>*))(Il2CppBase() + 0x1B69FF8))(this, classViews);
	}
	template <typename R = int32_t> R ClassPriority(ItemEntity* classEntity) {
		return ((R (*)(PlayerClassQuickSwitchWindow*, ItemEntity*))(Il2CppBase() + 0x1B6A3C0))(this, classEntity);
	}
	template <typename R = void> R ManualClose() {
		return ((R (*)(PlayerClassQuickSwitchWindow*))(Il2CppBase() + 0x1B6A560))(this);
	}

};

