#pragma once
#include <Il2Cpp/Il2Cpp.h>

class ChangedResourceData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "ChangedResourceData"));
	}

	template <typename R = Il2CppString*> R& Resource() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& Delta() {
		return *(R*)((uintptr_t)this + 0x8);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(ChangedResourceData*, uintptr_t))(Il2CppBase() + 0x13EBC08))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(ChangedResourceData*, uintptr_t))(Il2CppBase() + 0x13EBC5C))(this, reader);
	}

};

