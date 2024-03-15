#pragma once
#include <Il2Cpp/Il2Cpp.h>

class GameVersion
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "", "GameVersion"));
	}

	template <typename R = int32_t> R& MajorVersion() {
		return *(R*)((uintptr_t)this + 0x0);
	}
	template <typename R = int32_t> R& MinorVersion() {
		return *(R*)((uintptr_t)this + 0x4);
	}
	template <typename R = int32_t> R& Revision() {
		return *(R*)((uintptr_t)this + 0x8);
	}
	template <typename R = int32_t> R& Build() {
		return *(R*)((uintptr_t)this + 0xC);
	}

	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(GameVersion*))(Il2CppBase() + 0x176DB34))(this);
	}
	template <typename R = GameVersion> R get_Main() {
		return ((R (*)(GameVersion*))(Il2CppBase() + 0x176DD1C))(this);
	}
	template <typename R = bool> R Equals(GameVersion other) {
		return ((R (*)(GameVersion*, GameVersion))(Il2CppBase() + 0x176DD28))(this, other);
	}
	template <typename R = int32_t> R CompareTo(GameVersion other, bool ignoreMinor, bool ignoreRevision, bool ignoreBuild) {
		return ((R (*)(GameVersion*, GameVersion, bool, bool, bool))(Il2CppBase() + 0x176DD6C))(this, other, ignoreMinor, ignoreRevision, ignoreBuild);
	}
	template <typename R = bool> R Equals_1(Il2CppObject* obj) {
		return ((R (*)(GameVersion*, Il2CppObject*))(Il2CppBase() + 0x176DDE0))(this, obj);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(GameVersion*))(Il2CppBase() + 0x176DE94))(this);
	}
	template <typename R = bool> static R op_Equality(GameVersion gv1, GameVersion gv2) {
		return ((R (*)(void *, GameVersion, GameVersion))(Il2CppBase() + 0x176DEAC))(0, gv1, gv2);
	}
	template <typename R = bool> static R op_Inequality(GameVersion gv1, GameVersion gv2) {
		return ((R (*)(void *, GameVersion, GameVersion))(Il2CppBase() + 0x176DEE8))(0, gv1, gv2);
	}
	template <typename R = bool> static R op_GreaterThan(GameVersion gv1, GameVersion gv2) {
		return ((R (*)(void *, GameVersion, GameVersion))(Il2CppBase() + 0x176DF24))(0, gv1, gv2);
	}
	template <typename R = bool> static R op_LessThan(GameVersion gv1, GameVersion gv2) {
		return ((R (*)(void *, GameVersion, GameVersion))(Il2CppBase() + 0x176DF74))(0, gv1, gv2);
	}
	template <typename R = bool> static R TryParse(Il2CppString* str, uintptr_t* gameVersion) {
		return ((R (*)(void *, Il2CppString*, uintptr_t*))(Il2CppBase() + 0x176DFC4))(0, str, gameVersion);
	}
	template <typename R = GameVersion> static R Parse(Il2CppString* str) {
		return ((R (*)(void *, Il2CppString*))(Il2CppBase() + 0x176E16C))(0, str);
	}

};

