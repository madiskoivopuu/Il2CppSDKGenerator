#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GuildGlobalRating
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GuildGlobalRating"));
	}

	template <typename T = MessageParser1GuildGlobalRating*>*> static T& _parser() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> static T& IDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& iD_() {
		return *(T*)((uintptr_t)this + 0x10);
	}
	template <typename T = int32_t> static T& GuildIDFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& guildID_() {
		return *(T*)((uintptr_t)this + 0x18);
	}
	template <typename T = int32_t> static T& NameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& name_() {
		return *(T*)((uintptr_t)this + 0x20);
	}
	template <typename T = int32_t> static T& LeaderNameFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& leaderName_() {
		return *(T*)((uintptr_t)this + 0x28);
	}
	template <typename T = int32_t> static T& TagFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& tag_() {
		return *(T*)((uintptr_t)this + 0x30);
	}
	template <typename T = int32_t> static T& LanguageFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& language_() {
		return *(T*)((uintptr_t)this + 0x38);
	}
	template <typename T = int32_t> static T& RatingFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int64_t> T& rating_() {
		return *(T*)((uintptr_t)this + 0x40);
	}
	template <typename T = int32_t> static T& SizeFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = int32_t> T& size_() {
		return *(T*)((uintptr_t)this + 0x48);
	}
	template <typename T = int32_t> static T& RegionFieldNumber() {
		return *(T*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename T = Il2CppString*> T& region_() {
		return *(T*)((uintptr_t)this + 0x50);
	}

	template <typename T = MessageParser1GuildGlobalRating*>*> static T get_Parser() {
		return ((T (*)(void *))(Il2CppBase() + 0x1B25260))(0);
	}
	template <typename T = uintptr_t> static T get_Descriptor() {
		return ((T (*)(void *))(Il2CppBase() + 0x1B252C4))(0);
	}
	template <typename T = uintptr_t> T pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((T (*)(GuildGlobalRating*))(Il2CppBase() + 0x1B253E4))(this);
	}
	template <typename T = GuildGlobalRating*> T Clone() {
		return ((T (*)(GuildGlobalRating*))(Il2CppBase() + 0x1B25558))(this);
	}
	template <typename T = int64_t> T get_ID() {
		return ((T (*)(GuildGlobalRating*))(Il2CppBase() + 0x1B255B4))(this);
	}
	template <typename T = void> T set_ID(int64_t value) {
		return ((T (*)(GuildGlobalRating*, int64_t))(Il2CppBase() + 0x1B255BC))(this, value);
	}
	template <typename T = int64_t> T get_GuildID() {
		return ((T (*)(GuildGlobalRating*))(Il2CppBase() + 0x1B255C4))(this);
	}
	template <typename T = void> T set_GuildID(int64_t value) {
		return ((T (*)(GuildGlobalRating*, int64_t))(Il2CppBase() + 0x1B255CC))(this, value);
	}
	template <typename T = Il2CppString*> T get_Name() {
		return ((T (*)(GuildGlobalRating*))(Il2CppBase() + 0x1B255D4))(this);
	}
	template <typename T = void> T set_Name(Il2CppString* value) {
		return ((T (*)(GuildGlobalRating*, Il2CppString*))(Il2CppBase() + 0x1B255DC))(this, value);
	}
	template <typename T = Il2CppString*> T get_LeaderName() {
		return ((T (*)(GuildGlobalRating*))(Il2CppBase() + 0x1B2565C))(this);
	}
	template <typename T = void> T set_LeaderName(Il2CppString* value) {
		return ((T (*)(GuildGlobalRating*, Il2CppString*))(Il2CppBase() + 0x1B25664))(this, value);
	}
	template <typename T = Il2CppString*> T get_Tag() {
		return ((T (*)(GuildGlobalRating*))(Il2CppBase() + 0x1B256E4))(this);
	}
	template <typename T = void> T set_Tag(Il2CppString* value) {
		return ((T (*)(GuildGlobalRating*, Il2CppString*))(Il2CppBase() + 0x1B256EC))(this, value);
	}
	template <typename T = int32_t> T get_Language() {
		return ((T (*)(GuildGlobalRating*))(Il2CppBase() + 0x1B2576C))(this);
	}
	template <typename T = void> T set_Language(int32_t value) {
		return ((T (*)(GuildGlobalRating*, int32_t))(Il2CppBase() + 0x1B25774))(this, value);
	}
	template <typename T = int64_t> T get_Rating() {
		return ((T (*)(GuildGlobalRating*))(Il2CppBase() + 0x1B2577C))(this);
	}
	template <typename T = void> T set_Rating(int64_t value) {
		return ((T (*)(GuildGlobalRating*, int64_t))(Il2CppBase() + 0x1B25784))(this, value);
	}
	template <typename T = int32_t> T get_Size() {
		return ((T (*)(GuildGlobalRating*))(Il2CppBase() + 0x1B2578C))(this);
	}
	template <typename T = void> T set_Size(int32_t value) {
		return ((T (*)(GuildGlobalRating*, int32_t))(Il2CppBase() + 0x1B25794))(this, value);
	}
	template <typename T = Il2CppString*> T get_Region() {
		return ((T (*)(GuildGlobalRating*))(Il2CppBase() + 0x1B2579C))(this);
	}
	template <typename T = void> T set_Region(Il2CppString* value) {
		return ((T (*)(GuildGlobalRating*, Il2CppString*))(Il2CppBase() + 0x1B257A4))(this, value);
	}
	template <typename T = bool> T Equals(Il2CppObject* other) {
		return ((T (*)(GuildGlobalRating*, Il2CppObject*))(Il2CppBase() + 0x1B25824))(this, other);
	}
	template <typename T = bool> T Equals_1(GuildGlobalRating* other) {
		return ((T (*)(GuildGlobalRating*, GuildGlobalRating*))(Il2CppBase() + 0x1B25894))(this, other);
	}
	template <typename T = int32_t> T GetHashCode() {
		return ((T (*)(GuildGlobalRating*))(Il2CppBase() + 0x1B25974))(this);
	}
	template <typename T = Il2CppString*> T ToString() {
		return ((T (*)(GuildGlobalRating*))(Il2CppBase() + 0x1B25ABC))(this);
	}
	template <typename T = void> T WriteTo(uintptr_t output) {
		return ((T (*)(GuildGlobalRating*, uintptr_t))(Il2CppBase() + 0x1B25B20))(this, output);
	}
	template <typename T = int32_t> T CalculateSize() {
		return ((T (*)(GuildGlobalRating*))(Il2CppBase() + 0x1B25CF8))(this);
	}
	template <typename T = void> T MergeFrom(GuildGlobalRating* other) {
		return ((T (*)(GuildGlobalRating*, GuildGlobalRating*))(Il2CppBase() + 0x1B25F7C))(this, other);
	}
	template <typename T = void> T MergeFrom_1(uintptr_t input) {
		return ((T (*)(GuildGlobalRating*, uintptr_t))(Il2CppBase() + 0x1B26048))(this, input);
	}

};

}
