#pragma once
#include <Il2Cpp/Il2Cpp.h>
#include "UIWindow1.h" 

class PlayerClassQuickSwitchWindow : public UIWindow1<DataContext*>
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "PlayerClassQuickSwitchWindow"));
	}

	template <typename T = uintptr_t> T& _closeBtn() {
		return *(T*)((uintptr_t)this + 0x78);
	}
	template <typename T = uintptr_t> T& _acceptBtn() {
		return *(T*)((uintptr_t)this + 0x80);
	}
	template <typename T = uintptr_t> T& _resetBtn() {
		return *(T*)((uintptr_t)this + 0x88);
	}
	template <typename T = uintptr_t> T& _container() {
		return *(T*)((uintptr_t)this + 0x90);
	}
	template <typename T = PlayerClassSwitchView*> T& _classViewPrefab() {
		return *(T*)((uintptr_t)this + 0x98);
	}
	template <typename T = uintptr_t> T& _classSelectedCount() {
		return *(T*)((uintptr_t)this + 0xA0);
	}
	template <typename T = Il2CppArray<uintptr_t>*> T& _classFilterButtons() {
		return *(T*)((uintptr_t)this + 0xA8);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, PlayerClassSwitchView*>*> T& _classViews() {
		return *(T*)((uintptr_t)this + 0xB0);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, PlayerClassSwitchView*>*> T& _selectedClassViews() {
		return *(T*)((uintptr_t)this + 0xB8);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& _activeFilters() {
		return *(T*)((uintptr_t)this + 0xC0);
	}
	template <typename T = Il2CppList<Il2CppString*>*> T& _selectedClasses() {
		return *(T*)((uintptr_t)this + 0xC8);
	}
	template <typename T = int64_t> T& _playerId() {
		return *(T*)((uintptr_t)this + 0xD0);
	}

	template <typename T = bool> T get__isLimitNotReached() {
		return ((T (*)(PlayerClassQuickSwitchWindow*))(Il2CppBase() + 0x1B68414))(this);
	}
	template <typename T = void> T Awake() {
		return ((T (*)(PlayerClassQuickSwitchWindow*))(Il2CppBase() + 0x1B68494))(this);
	}
	template <typename T = void> T OnShow() {
		return ((T (*)(PlayerClassQuickSwitchWindow*))(Il2CppBase() + 0x1B685C4))(this);
	}
	template <typename T = void> T OnReset() {
		return ((T (*)(PlayerClassQuickSwitchWindow*))(Il2CppBase() + 0x1B697EC))(this);
	}
	template <typename T = void> T OnClassViewClick(Il2CppString* viewBlueprint, bool isOn) {
		return ((T (*)(PlayerClassQuickSwitchWindow*, Il2CppString*, bool))(Il2CppBase() + 0x1B69AB0))(this, viewBlueprint, isOn);
	}
	template <typename T = void> T CheckLimitReached() {
		return ((T (*)(PlayerClassQuickSwitchWindow*))(Il2CppBase() + 0x1B69678))(this);
	}
	template <typename T = void> T OnFilterButtonClick(ClassFilterButton* filter) {
		return ((T (*)(PlayerClassQuickSwitchWindow*, ClassFilterButton*))(Il2CppBase() + 0x1B69F24))(this, filter);
	}
	template <typename T = void> T CollectionFilter(Il2CppDictionary<Il2CppString*, PlayerClassSwitchView*>* classViews) {
		return ((T (*)(PlayerClassQuickSwitchWindow*, Il2CppDictionary<Il2CppString*, PlayerClassSwitchView*>*))(Il2CppBase() + 0x1B69FF8))(this, classViews);
	}
	template <typename T = int32_t> T ClassPriority(ItemEntity* classEntity) {
		return ((T (*)(PlayerClassQuickSwitchWindow*, ItemEntity*))(Il2CppBase() + 0x1B6A3C0))(this, classEntity);
	}
	template <typename T = void> T ManualClose() {
		return ((T (*)(PlayerClassQuickSwitchWindow*))(Il2CppBase() + 0x1B6A560))(this);
	}

};

