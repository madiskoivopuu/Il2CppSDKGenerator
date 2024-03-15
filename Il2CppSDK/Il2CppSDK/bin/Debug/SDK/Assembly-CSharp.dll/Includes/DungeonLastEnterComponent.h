#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DungeonLastEnterComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DungeonLastEnterComponent"));
	}

	 Il2CppDictionary<Il2CppString*, ValueTuple2int64_t, int64_t>*>*& Values() {
		return *(Il2CppDictionary<Il2CppString*, ValueTuple2int64_t, int64_t>*>**)((uintptr_t)this + 0x10);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(DungeonLastEnterComponent*, Il2CppObject*))(Il2CppBase() + 0x130DE84))(this, target);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(DungeonLastEnterComponent*, uintptr_t))(Il2CppBase() + 0x130DF9C))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(DungeonLastEnterComponent*, uintptr_t))(Il2CppBase() + 0x130E1F4))(this, writer);
	}

};

