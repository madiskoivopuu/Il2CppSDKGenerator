#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DynamicGradeComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DynamicGradeComponent"));
	}

	template <typename R = DynamicGradeType*> R& Type() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> R& Offset() {
		return *(R*)((uintptr_t)this + 0x14);
	}
	 Nullable1int32_t>*& Max() {
		return *(Nullable1int32_t>**)((uintptr_t)this + 0x18);
	}

	template <typename R = void> R CopyTo(Il2CppObject* target) {
		return ((R (*)(DynamicGradeComponent*, Il2CppObject*))(Il2CppBase() + 0x1A9786C))(this, target);
	}
	template <typename R = Il2CppString*> R Read(uintptr_t reader) {
		return ((R (*)(DynamicGradeComponent*, uintptr_t))(Il2CppBase() + 0x1A97910))(this, reader);
	}
	template <typename R = void> R Write(uintptr_t writer) {
		return ((R (*)(DynamicGradeComponent*, uintptr_t))(Il2CppBase() + 0x1A979E4))(this, writer);
	}

};

