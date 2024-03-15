#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GachaResources
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GachaResources"));
	}

	template <typename R = Resource> R& Base() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Resource> R& Additional() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	 Il2CppList<Resource>*& ListAdditional() {
		return *(Il2CppList<Resource>**)((uintptr_t)this + 0x30);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(GachaResources*, uintptr_t))(Il2CppBase() + 0x10C433C))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(GachaResources*, uintptr_t))(Il2CppBase() + 0x10C44A8))(this, reader);
	}

};

