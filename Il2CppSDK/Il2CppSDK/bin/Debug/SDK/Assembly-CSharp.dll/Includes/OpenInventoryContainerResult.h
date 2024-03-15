#pragma once
#include <Il2Cpp/Il2Cpp.h>

class OpenInventoryContainerResult
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "OpenInventoryContainerResult"));
	}

	template <typename R = Il2CppString*> R& Key() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = Il2CppArray<Resource*>*> R& Resources() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = Il2CppString*> R& ErrorMsg() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& AnalyticName() {
		return *(R*)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(OpenInventoryContainerResult*, uintptr_t))(Il2CppBase() + 0x11E3BAC))(this, writer);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(OpenInventoryContainerResult*, uintptr_t))(Il2CppBase() + 0x11E3C90))(this, reader);
	}

};

