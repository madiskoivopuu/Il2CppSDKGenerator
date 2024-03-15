#pragma once
#include <Il2Cpp/Il2Cpp.h>

class StackComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "StackComponent"));
	}

	template <typename R = Il2CppString*> R& Resource() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& Count() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	 Nullable1<int64_t>*& Signature() {
		return *(Nullable1<int64_t>**)((uintptr_t)this + 0x20);
	}

	template <typename R = void> R CopyTo(Il2CppObject* targetObject) {
		return ((R (*)(StackComponent*, Il2CppObject*))(Il2CppBase() + 0x1488EEC))(this, targetObject);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(StackComponent*, uintptr_t))(Il2CppBase() + 0x1488F98))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(StackComponent*, uintptr_t))(Il2CppBase() + 0x1489060))(this, writer);
	}

};

