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
	template <typename T = GameVersion*> T get_Main() {
		return ((T (*)(GameVersion*))(Il2CppBase() + 0x176DD1C))(this);
	}
	template <typename T = bool> T Equals(GameVersion* other) {
		return ((T (*)(GameVersion*, GameVersion*))(Il2CppBase() + 0x176DD28))(this, other);
	}
	template <typename T = int32_t> T CompareTo(GameVersion* other, bool ignoreMinor, bool ignoreRevision, bool ignoreBuild) {
		return ((T (*)(GameVersion*, GameVersion*, bool, bool, bool))(Il2CppBase() + 0x176DD6C))(this, other, ignoreMinor, ignoreRevision, ignoreBuild);
	}
	template <typename T = bool> T Equals_1(Il2CppObject* obj) {
		return ((T (*)(GameVersion*, Il2CppObject*))(Il2CppBase() + 0x176DDE0))(this, obj);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(GameVersion*))(Il2CppBase() + 0x176DE94))(this);
	}
	template <typename T = bool> static T op_Equality(GameVersion* gv1, GameVersion* gv2) {
		return ((T (*)(void *, GameVersion*, GameVersion*))(Il2CppBase() + 0x176DEAC))(0, gv1, gv2);
	}
	template <typename T = bool> static T op_Inequality(GameVersion* gv1, GameVersion* gv2) {
		return ((T (*)(void *, GameVersion*, GameVersion*))(Il2CppBase() + 0x176DEE8))(0, gv1, gv2);
	}
	template <typename T = bool> static T op_GreaterThan(GameVersion* gv1, GameVersion* gv2) {
		return ((T (*)(void *, GameVersion*, GameVersion*))(Il2CppBase() + 0x176DF24))(0, gv1, gv2);
	}
	template <typename T = bool> static T op_LessThan(GameVersion* gv1, GameVersion* gv2) {
		return ((T (*)(void *, GameVersion*, GameVersion*))(Il2CppBase() + 0x176DF74))(0, gv1, gv2);
	}
	template <typename T = bool> static T TryParse(Il2CppString* str, uintptr_t* gameVersion) {
		return ((T (*)(void *, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x176DFC4))(0, str, gameVersion);
	}
	template <typename T = GameVersion*> static T Parse(Il2CppString* str) {
		return ((T (*)(void *, Il2CppString*))(Il2CppBase() + 0x176E16C))(0, str);
	}

};

