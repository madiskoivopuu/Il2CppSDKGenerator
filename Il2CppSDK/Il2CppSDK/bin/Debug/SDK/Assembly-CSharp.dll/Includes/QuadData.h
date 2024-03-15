#pragma once
#include <Il2Cpp/Il2Cpp.h>

class QuadData
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "QuadData"));
	}

	 Nullable1int64_t>*& OwnerId() {
		return *(Nullable1int64_t>**)((uintptr_t)this + 0x0);
	}
	 Il2CppList<KeyValuePair2Il2CppString*, EntityBlueprint*>*>*& Data() {
		return *(Il2CppList<KeyValuePair2Il2CppString*, EntityBlueprint*>*>**)((uintptr_t)this + 0x10);
	}
	 Il2CppDictionary<Il2CppString*, int32_t>*& Stats() {
		return *(Il2CppDictionary<Il2CppString*, int32_t>**)((uintptr_t)this + 0x18);
	}
	template <typename R = int64_t> R& EndTimeMountShard() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	 Il2CppDictionary<Il2CppString*, HashSet1int64_t>*>*& OwnerStats() {
		return *(Il2CppDictionary<Il2CppString*, HashSet1int64_t>*>**)((uintptr_t)this + 0x28);
	}

	 Il2CppDictionary<Il2CppString*, HashSet1int64_t>*>* get_OwnerStats() {
		return ((Il2CppDictionary<Il2CppString*, HashSet1int64_t>*>* (*)(QuadData*))(Il2CppBase() + 0x11C5B7C))(this);
	}
	template <typename R = void> R set_OwnerStats(Il2CppDictionary<Il2CppString*, HashSet1int64_t>*>* value) {
		return ((R (*)(QuadData*, Il2CppDictionary<Il2CppString*, HashSet1int64_t>*>*))(Il2CppBase() + 0x11C5B84))(this, value);
	}

};

