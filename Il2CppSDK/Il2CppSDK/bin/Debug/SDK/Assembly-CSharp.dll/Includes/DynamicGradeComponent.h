#pragma once
#include <Il2Cpp/Il2Cpp.h>

class DynamicGradeComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "DynamicGradeComponent"));
	}

	template <typename T = DynamicGradeType*> T& Type() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> T& Offset() {
		return *(T*)((uintptr_t)this + 0x14);
	}
	template <typename T = Nullable1int32_t>*> T& Max() {
		return *(T*)((uintptr_t)this + 0x18);
	}

	template <typename T = void> T CopyTo(Il2CppObject* target) {
		return ((T (*)(DynamicGradeComponent*, Il2CppObject*))(Il2CppBase() + 0x1A9786C))(this, target);
	}
	template <typename T = Il2CppString*> T Read(uintptr_t reader) {
		return ((T (*)(DynamicGradeComponent*, uintptr_t))(Il2CppBase() + 0x1A97910))(this, reader);
	}
	template <typename T = void> T Write(uintptr_t writer) {
		return ((T (*)(DynamicGradeComponent*, uintptr_t))(Il2CppBase() + 0x1A979E4))(this, writer);
	}

};

