#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EventTimerCheatItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EventTimerCheatItem"));
	}

	template <typename R = uintptr_t> R& _typeText() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = ImageMonoBehaviour*> R& _icon() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = uintptr_t> R& _nameText() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = uintptr_t> R& _startText() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = uintptr_t> R& _endText() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = uintptr_t> R& _resourcesRoot() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = ItemForMessage*> R& _itemPrefab() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = Il2CppString*> R& _empty() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	 Il2CppList<ItemForMessage*>*& _items() {
		return *(Il2CppList<ItemForMessage*>**)((uintptr_t)this + 0x58);
	}
	template <typename R = int32_t> R& Index() {
		return *(R*)((uintptr_t)this + 0x60);
	}

	template <typename R = int32_t> R get_Index() {
		return ((R (*)(EventTimerCheatItem*))(Il2CppBase() + 0x1791924))(this);
	}
	template <typename R = void> R set_Index(int32_t value) {
		return ((R (*)(EventTimerCheatItem*, int32_t))(Il2CppBase() + 0x179192C))(this, value);
	}
	template <typename R = void> R Bind(int32_t index, Il2CppString* typePreffix, Il2CppString* name, int64_t startTime, int64_t endTime, Icon icon, Il2CppArray<Resource>* resources) {
		return ((R (*)(EventTimerCheatItem*, int32_t, Il2CppString*, Il2CppString*, int64_t, int64_t, Icon, Il2CppArray<Resource>*))(Il2CppBase() + 0x1791934))(this, index, typePreffix, name, startTime, endTime, icon, resources);
	}
	template <typename R = void> R SetActive(bool isActive) {
		return ((R (*)(EventTimerCheatItem*, bool))(Il2CppBase() + 0x1791E90))(this, isActive);
	}
	template <typename R = void> R AddItemIfNeed(int32_t itemIndex) {
		return ((R (*)(EventTimerCheatItem*, int32_t))(Il2CppBase() + 0x1791DA4))(this, itemIndex);
	}

};

