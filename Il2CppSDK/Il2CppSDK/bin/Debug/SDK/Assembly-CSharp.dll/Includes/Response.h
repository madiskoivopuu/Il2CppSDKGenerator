#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Response
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Response"));
	}

	template <typename T = Il2CppString*> T& _id() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppString*> T& _index() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& _primary_term() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& _seq_no() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Shards*> T& _shards() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = Il2CppString*> T& _type() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = Il2CppString*> T& _version() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& result() {
		return *(T*)((uintptr_t)this + 0x38);
	}


};

