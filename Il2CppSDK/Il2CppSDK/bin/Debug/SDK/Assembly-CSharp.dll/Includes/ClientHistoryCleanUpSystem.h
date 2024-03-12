#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ClientHistoryCleanUpSystem
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ClientHistoryCleanUpSystem"));
	}

	template <typename T = int64_t> static T& RecordTics() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = uintptr_t> T& _world() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = void*> T& _records() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T Initialize() {
		return ((T (*)(ClientHistoryCleanUpSystem*))(Il2CppBase() + 0xE185E0))(this);
	}
	template <typename T = void> T Execute() {
		return ((T (*)(ClientHistoryCleanUpSystem*))(Il2CppBase() + 0xE1865C))(this);
	}

};

}
