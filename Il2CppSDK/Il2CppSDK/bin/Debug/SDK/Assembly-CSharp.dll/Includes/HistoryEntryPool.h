#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HistoryEntryPool
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HistoryEntryPool"));
	}

	template <typename R = HistoryEntryView*> R& prefab() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = uintptr_t> R& root() {
		return *(R*)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R Bind(Il2CppList<CheatData>* data) {
		return ((R (*)(HistoryEntryPool*, Il2CppList<CheatData>*))(Il2CppBase() + 0x1C51A84))(this, data);
	}
	template <typename R = void> R OnNeedUpdate() {
		return ((R (*)(HistoryEntryPool*))(Il2CppBase() + 0x1C52060))(this);
	}

};

