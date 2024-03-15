#pragma once
#include <Il2Cpp/Il2Cpp.h>

class LocationStatComponent
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "LocationStatComponent"));
	}

	 HashSet1int64_t>*& Visits() {
		return *(HashSet1int64_t>**)((uintptr_t)this + 0x10);
	}
	 HashSet1int64_t>*& PkOn() {
		return *(HashSet1int64_t>**)((uintptr_t)this + 0x18);
	}
	 HashSet1LongLong*>*& PvPKills() {
		return *(HashSet1LongLong*>**)((uintptr_t)this + 0x20);
	}


};

