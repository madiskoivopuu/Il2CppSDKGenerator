#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GameVersion
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GameVersion"));
	}

	template <typename T = int32_t> T& MajorVersion() {
		return *(T*)((uintptr_t)this + 0x0);
	}
	template <typename T = int32_t> T& MinorVersion() {
		return *(T*)((uintptr_t)this + 0x4);
	}
	template <typename T = int32_t> T& Revision() {
		return *(T*)((uintptr_t)this + 0x8);
	}
	template <typename T = int32_t> T& Build() {
		return *(T*)((uintptr_t)this + 0xC);
	}

	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(GameVersion*))(Il2CppBase() + 0x176DB34))(this);
	}
	template <typename T = uintptr_t> T get_Main() {
		return ((T (*)(GameVersion*))(Il2CppBase() + 0x176DD1C))(this);
	}
	template <typename T = bool> T Equals(uintptr_t other) {
		return ((T (*)(GameVersion*, uintptr_t))(Il2CppBase() + 0x176DD28))(this, other);
	}
	template <typename T = int32_t> T CompareTo(uintptr_t other, bool ignoreMinor, bool ignoreRevision, bool ignoreBuild) {
		return ((T (*)(GameVersion*, uintptr_t, bool, bool, bool))(Il2CppBase() + 0x176DD6C))(this, other, ignoreMinor, ignoreRevision, ignoreBuild);
	}
	template <typename T = bool> T Equals_1(uintptr_t obj) {
		return ((T (*)(GameVersion*, uintptr_t))(Il2CppBase() + 0x176DDE0))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(GameVersion*))(Il2CppBase() + 0x176DE94))(this);
	}
	template <typename T = bool> static T op_Equality(uintptr_t gv1, uintptr_t gv2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x176DEAC))(0, gv1, gv2);
	}
	template <typename T = bool> static T op_Inequality(uintptr_t gv1, uintptr_t gv2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x176DEE8))(0, gv1, gv2);
	}
	template <typename T = bool> static T op_GreaterThan(uintptr_t gv1, uintptr_t gv2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x176DF24))(0, gv1, gv2);
	}
	template <typename T = bool> static T op_LessThan(uintptr_t gv1, uintptr_t gv2) {
		return ((T (*)(void *, uintptr_t, uintptr_t))(Il2CppBase() + 0x176DF74))(0, gv1, gv2);
	}
	template <typename T = bool> static T TryParse(Il2CppString* str, uintptr_t* gameVersion) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x176DFC4))(0, str, gameVersion);
	}
	template <typename T = uintptr_t> static T Parse(Il2CppString* str) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x176E16C))(0, str);
	}

};

}
