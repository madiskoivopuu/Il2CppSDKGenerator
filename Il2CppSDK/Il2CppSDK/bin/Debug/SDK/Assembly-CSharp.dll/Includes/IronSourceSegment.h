#pragma once
#include <Il2Cpp/Il2Cpp.h>

class IronSourceSegment
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "IronSourceSegment"));
	}

	template <typename R = int32_t> R& age() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = Il2CppString*> R& gender() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> R& level() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> R& isPaying() {
		return *(R*)((uintptr_t)this + 0x24);
	}
	template <typename R = int64_t> R& userCreationDate() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = double> R& iapt() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = Il2CppString*> R& segmentName() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	 Il2CppDictionary<Il2CppString*, Il2CppString*>*& customs() {
		return *(Il2CppDictionary<Il2CppString*, Il2CppString*>**)((uintptr_t)this + 0x40);
	}

	template <typename R = void> R setCustom(Il2CppString* key, Il2CppString* value) {
		return ((R (*)(IronSourceSegment*, Il2CppString*, Il2CppString*))(Il2CppBase() + 0x10E4FE0))(this, key, value);
	}
	 Il2CppDictionary<Il2CppString*, Il2CppString*>* getSegmentAsDict() {
		return ((Il2CppDictionary<Il2CppString*, Il2CppString*>* (*)(IronSourceSegment*))(Il2CppBase() + 0x10E504C))(this);
	}

};

