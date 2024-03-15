#pragma once
#include <Il2Cpp/Il2Cpp.h>

class Resource
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "Resource"));
	}

	template <typename R = Il2CppString*> R& Name() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& Count() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	 Nullable1float>*& Durability() {
		return *(Nullable1float>**)((uintptr_t)this + 0xC);
	}
	template <typename R = Resource*> static R& Empty() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(Resource*, uintptr_t))(Il2CppBase() + 0x10C4450))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(Resource*, uintptr_t))(Il2CppBase() + 0x10C46CC))(this, reader);
	}
	template <typename R = bool> R Equals(Resource* other) {
		return ((R (*)(Resource*, Resource*))(Il2CppBase() + 0x10C4794))(this, other);
	}

};

