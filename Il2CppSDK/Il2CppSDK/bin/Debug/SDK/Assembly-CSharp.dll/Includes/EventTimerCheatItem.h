#pragma once
#include <Il2Cpp/Il2Cpp.h>

class EventTimerCheatItem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "EventTimerCheatItem"));
	}

	template <typename T = uintptr_t> T& _typeText() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& _icon() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = uintptr_t> T& _nameText() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = uintptr_t> T& _startText() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = uintptr_t> T& _endText() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = uintptr_t> T& _resourcesRoot() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = uintptr_t> T& _itemPrefab() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = Il2CppString*> T& _empty() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = Il2CppList<uintptr_t>*> T& _items() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = int32_t> T& Index() {
		return *(T*)((uintptr_t)this + 0x60);
	}

	template <typename T = int32_t> T get_Index() {
		return ((T (*)(EventTimerCheatItem*))(Il2CppBase() + 0x1791924))(this);
	}
	template <typename T = void> T set_Index(int32_t value) {
		return ((T (*)(EventTimerCheatItem*, int32_t))(Il2CppBase() + 0x179192C))(this, value);
	}
	template <typename T = void> T Bind(int32_t index, Il2CppString* typePreffix, Il2CppString* name, int64_t startTime, int64_t endTime, uintptr_t icon, Il2CppArray<uintptr_t>* resources) {
		return ((T (*)(EventTimerCheatItem*, int32_t, Il2CppString*, Il2CppString*, int64_t, int64_t, uintptr_t, Il2CppArray<uintptr_t>*))(Il2CppBase() + 0x1791934))(this, index, typePreffix, name, startTime, endTime, icon, resources);
	}
	template <typename T = void> T SetActive(bool isActive) {
		return ((T (*)(EventTimerCheatItem*, bool))(Il2CppBase() + 0x1791E90))(this, isActive);
	}
	template <typename T = void> T AddItemIfNeed(int32_t itemIndex) {
		return ((T (*)(EventTimerCheatItem*, int32_t))(Il2CppBase() + 0x1791DA4))(this, itemIndex);
	}

};

}
