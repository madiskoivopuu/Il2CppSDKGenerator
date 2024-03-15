#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClientHistoryCleanUpSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClientHistoryCleanUpSystem"));
	}

	template <typename R = int64_t> static R& RecordTics() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = ArenaClientWorld*> R& _world() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	 IGroup1HistoryEntity*>*& _records() {
		return *(IGroup1HistoryEntity*>**)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R Initialize() {
		return ((R (*)(ClientHistoryCleanUpSystem*))(Il2CppBase() + 0xE185E0))(this);
	}
	template <typename R = void> R Execute() {
		return ((R (*)(ClientHistoryCleanUpSystem*))(Il2CppBase() + 0xE1865C))(this);
	}

};

