#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Response
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Response"));
	}

	template <typename R = Il2CppString*> R& _id() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppString*> R& _index() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = int32_t> R& _primary_term() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& _seq_no() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	template <typename R = Shards*> R& _shards() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = Il2CppString*> R& _type() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = Il2CppString*> R& _version() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = Il2CppString*> R& result() {
		return *(R*)((uintptr_t)this + 0x38);
	}


};

