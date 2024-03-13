#pragma once
#include <Il2Cpp/Il2Cpp.h>

class HistoryEntryPool
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "HistoryEntryPool"));
	}

	template <typename T = HistoryEntryView*> T& prefab() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = uintptr_t> T& root() {
		return *(T*)((uintptr_t)this + 0x20);
	}

	template <typename T = void> T Bind(Il2CppList<CheatData*>* data) {
		return ((T (*)(HistoryEntryPool*, Il2CppList<CheatData*>*))(Il2CppBase() + 0x1C51A84))(this, data);
	}
	template <typename T = void> T OnNeedUpdate() {
		return ((T (*)(HistoryEntryPool*))(Il2CppBase() + 0x1C52060))(this);
	}

};

