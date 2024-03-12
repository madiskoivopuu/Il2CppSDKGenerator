#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AccountDataCommon
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AccountDataCommon"));
	}

	template <typename T = int64_t> T& PlayerId() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int64_t> T& WorldId() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& ExitTag() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int64_t> T& ExitOwner() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& MapStartId() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& MapEndId() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = float> T& MapSpeed() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int64_t> T& MapEndTimeMove() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> T& SaveCounter() {
		return *(T*)((uintptr_t)this + 0x50);
	}
	template <typename T = int32_t> T& TestGroup() {
		return *(T*)((uintptr_t)this + 0x54);
	}
	template <typename T = Il2CppDictionary<int32_t, uintptr_t>*> T& Components() {
		return *(T*)((uintptr_t)this + 0x58);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> T& PersonalEntities() {
		return *(T*)((uintptr_t)this + 0x60);
	}


};

}
