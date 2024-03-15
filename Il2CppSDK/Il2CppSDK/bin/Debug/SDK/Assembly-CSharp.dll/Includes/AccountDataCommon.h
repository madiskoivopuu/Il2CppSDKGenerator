#pragma once
#include <Il2Cpp/Il2Cpp.h>

class AccountDataCommon
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "AccountDataCommon"));
	}

	template <typename R = int64_t> R& PlayerId() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int64_t> R& WorldId() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& ExitTag() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int64_t> R& ExitOwner() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppString*> R& MapStartId() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = Il2CppString*> R& MapEndId() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = float> R& MapSpeed() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = int64_t> R& MapEndTimeMove() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = int32_t> R& SaveCounter() {
		return *(R*)((uintptr_t)this + 0x50);
	}
	template <typename R = int32_t> R& TestGroup() {
		return *(R*)((uintptr_t)this + 0x54);
	}
	 Il2CppDictionary<int32_t, uintptr_t>*& Components() {
		return *(Il2CppDictionary<int32_t, uintptr_t>**)((uintptr_t)this + 0x58);
	}
	 Il2CppDictionary<Il2CppString*, Il2CppString*>*& PersonalEntities() {
		return *(Il2CppDictionary<Il2CppString*, Il2CppString*>**)((uintptr_t)this + 0x60);
	}


};

