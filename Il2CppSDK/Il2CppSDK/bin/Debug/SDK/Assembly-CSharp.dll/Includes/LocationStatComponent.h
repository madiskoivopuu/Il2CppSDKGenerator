#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LocationStatComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocationStatComponent"));
	}

	 HashSet1<int64_t>*& Visits() {
		return *(HashSet1<int64_t>**)((uintptr_t)this + 0x10);
	}
	 HashSet1<int64_t>*& PkOn() {
		return *(HashSet1<int64_t>**)((uintptr_t)this + 0x18);
	}
	 HashSet1<LongLong>*& PvPKills() {
		return *(HashSet1<LongLong>**)((uintptr_t)this + 0x20);
	}


};

