#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DungeonLastEnterComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DungeonLastEnterComponent"));
	}

	template <typename T = Il2CppDictionary<Il2CppString*, ValueTuple2int64_t, int64_t>*>*> T& Values() {
		return *(T*)((uintptr_t)this + 0x10);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(DungeonLastEnterComponent*, Il2CppObject*))(Il2CppBase() + 0x130DE84))(this, target);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(DungeonLastEnterComponent*, uintptr_t))(Il2CppBase() + 0x130DF9C))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(DungeonLastEnterComponent*, uintptr_t))(Il2CppBase() + 0x130E1F4))(this, writer);
	}

};

