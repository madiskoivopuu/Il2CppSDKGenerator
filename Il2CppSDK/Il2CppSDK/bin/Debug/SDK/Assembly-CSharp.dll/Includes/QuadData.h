#pragma once
#include <Il2Cpp/Il2Cpp.h>

class QuadData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "QuadData"));
	}

	template <typename T = Nullable1int64_t>*> T& OwnerId() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = Il2CppList<KeyValuePair2Il2CppString*, EntityBlueprint*>*>*> T& Data() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, int32_t>*> T& Stats() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int64_t> T& EndTimeMountShard() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, HashSet1int64_t>*>*> T& OwnerStats() {
		return *(T*)((uintptr_t)this + 0x28);
	}

	template <typename T = Il2CppDictionary<Il2CppString*, HashSet1int64_t>*>*> T get_OwnerStats() {
		return ((T (*)(QuadData*))(Il2CppBase() + 0x11C5B7C))(this);
	}
	template <typename T = void> T set_OwnerStats(Il2CppDictionary<Il2CppString*, HashSet1int64_t>*>* value) {
		return ((T (*)(QuadData*, Il2CppDictionary<Il2CppString*, HashSet1int64_t>*>*))(Il2CppBase() + 0x11C5B84))(this, value);
	}

};

