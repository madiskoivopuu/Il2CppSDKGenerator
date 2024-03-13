#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IronSourceSegment
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceSegment"));
	}

	template <typename T = int32_t> T& age() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = Il2CppString*> T& gender() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> T& level() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> T& isPaying() {
		return *(T*)((uintptr_t)this + 0x24);
	}
	template <typename T = int64_t> T& userCreationDate() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = double> T& iapt() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = Il2CppString*> T& segmentName() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> T& customs() {
		return *(T*)((uintptr_t)this + 0x40);
	}

	template <typename T = void> T setCustom(Il2CppString* key, Il2CppString* value) {
		return ((T (*)(IronSourceSegment*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x10E4FE0))(this, key, value);
	}
	template <typename T = Il2CppDictionary<Il2CppString*, Il2CppString*>*> T getSegmentAsDict() {
		return ((T (*)(IronSourceSegment*))(Il2CppBase() + 0x10E504C))(this);
	}

};

