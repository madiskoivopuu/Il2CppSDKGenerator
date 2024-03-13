#pragma once
#include <Il2Cpp/Il2Cpp.h>

class RuneItemState
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "RuneItemState"));
	}

	template <typename T = int32_t> T& value__() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = RuneItemState*> static T& Normal() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = RuneItemState*> static T& MergeProcessing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = RuneItemState*> static T& DestroyProcessing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = RuneItemState*> static T& ArmingProcessing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = RuneItemState*> static T& DragProcessing() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = RuneItemState*> static T& ReadyToMerge() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}


};

