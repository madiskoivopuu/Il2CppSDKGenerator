#pragma once
#include <Il2Cpp/Il2Cpp.h>
namespace ProtoModels {

class GuildGlobalRating
{
public: 

	static Il2CppClass *StaticClass() {
		return (Il2CppClass *)(Il2Cpp::GetClass("Assembly-CSharp.dll", "ProtoModels", "GuildGlobalRating"));
	}

	 static MessageParser1<ProtoModels::GuildGlobalRating*>*& _parser() {
		return *(MessageParser1<ProtoModels::GuildGlobalRating*>**)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> static R& IDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& iD_() {
		return *(R*)((uintptr_t)this + 0x10);
	}
	template <typename R = int32_t> static R& GuildIDFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& guildID_() {
		return *(R*)((uintptr_t)this + 0x18);
	}
	template <typename R = int32_t> static R& NameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& name_() {
		return *(R*)((uintptr_t)this + 0x20);
	}
	template <typename R = int32_t> static R& LeaderNameFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& leaderName_() {
		return *(R*)((uintptr_t)this + 0x28);
	}
	template <typename R = int32_t> static R& TagFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& tag_() {
		return *(R*)((uintptr_t)this + 0x30);
	}
	template <typename R = int32_t> static R& LanguageFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& language_() {
		return *(R*)((uintptr_t)this + 0x38);
	}
	template <typename R = int32_t> static R& RatingFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int64_t> R& rating_() {
		return *(R*)((uintptr_t)this + 0x40);
	}
	template <typename R = int32_t> static R& SizeFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = int32_t> R& size_() {
		return *(R*)((uintptr_t)this + 0x48);
	}
	template <typename R = int32_t> static R& RegionFieldNumber() {
		return *(R*)((uintptr_t)StaticClass()->static_fields + 0x0);
	}
	template <typename R = Il2CppString*> R& region_() {
		return *(R*)((uintptr_t)this + 0x50);
	}

	 static MessageParser1<ProtoModels::GuildGlobalRating*>* get_Parser() {
		return ((MessageParser1<ProtoModels::GuildGlobalRating*>* (*)(void *))(Il2CppBase() + 0x1B25260))(0);
	}
	template <typename R = uintptr_t> static R get_Descriptor() {
		return ((R (*)(void *))(Il2CppBase() + 0x1B252C4))(0);
	}
	template <typename R = uintptr_t> R pb_Google_Protobuf_IMessage_get_Descriptor() {
		return ((R (*)(GuildGlobalRating*))(Il2CppBase() + 0x1B253E4))(this);
	}
	template <typename R = ProtoModels::GuildGlobalRating*> R Clone() {
		return ((R (*)(GuildGlobalRating*))(Il2CppBase() + 0x1B25558))(this);
	}
	template <typename R = int64_t> R get_ID() {
		return ((R (*)(GuildGlobalRating*))(Il2CppBase() + 0x1B255B4))(this);
	}
	template <typename R = void> R set_ID(int64_t value) {
		return ((R (*)(GuildGlobalRating*, int64_t))(Il2CppBase() + 0x1B255BC))(this, value);
	}
	template <typename R = int64_t> R get_GuildID() {
		return ((R (*)(GuildGlobalRating*))(Il2CppBase() + 0x1B255C4))(this);
	}
	template <typename R = void> R set_GuildID(int64_t value) {
		return ((R (*)(GuildGlobalRating*, int64_t))(Il2CppBase() + 0x1B255CC))(this, value);
	}
	template <typename R = Il2CppString*> R get_Name() {
		return ((R (*)(GuildGlobalRating*))(Il2CppBase() + 0x1B255D4))(this);
	}
	template <typename R = void> R set_Name(Il2CppString* value) {
		return ((R (*)(GuildGlobalRating*, Il2CppString*))(Il2CppBase() + 0x1B255DC))(this, value);
	}
	template <typename R = Il2CppString*> R get_LeaderName() {
		return ((R (*)(GuildGlobalRating*))(Il2CppBase() + 0x1B2565C))(this);
	}
	template <typename R = void> R set_LeaderName(Il2CppString* value) {
		return ((R (*)(GuildGlobalRating*, Il2CppString*))(Il2CppBase() + 0x1B25664))(this, value);
	}
	template <typename R = Il2CppString*> R get_Tag() {
		return ((R (*)(GuildGlobalRating*))(Il2CppBase() + 0x1B256E4))(this);
	}
	template <typename R = void> R set_Tag(Il2CppString* value) {
		return ((R (*)(GuildGlobalRating*, Il2CppString*))(Il2CppBase() + 0x1B256EC))(this, value);
	}
	template <typename R = int32_t> R get_Language() {
		return ((R (*)(GuildGlobalRating*))(Il2CppBase() + 0x1B2576C))(this);
	}
	template <typename R = void> R set_Language(int32_t value) {
		return ((R (*)(GuildGlobalRating*, int32_t))(Il2CppBase() + 0x1B25774))(this, value);
	}
	template <typename R = int64_t> R get_Rating() {
		return ((R (*)(GuildGlobalRating*))(Il2CppBase() + 0x1B2577C))(this);
	}
	template <typename R = void> R set_Rating(int64_t value) {
		return ((R (*)(GuildGlobalRating*, int64_t))(Il2CppBase() + 0x1B25784))(this, value);
	}
	template <typename R = int32_t> R get_Size() {
		return ((R (*)(GuildGlobalRating*))(Il2CppBase() + 0x1B2578C))(this);
	}
	template <typename R = void> R set_Size(int32_t value) {
		return ((R (*)(GuildGlobalRating*, int32_t))(Il2CppBase() + 0x1B25794))(this, value);
	}
	template <typename R = Il2CppString*> R get_Region() {
		return ((R (*)(GuildGlobalRating*))(Il2CppBase() + 0x1B2579C))(this);
	}
	template <typename R = void> R set_Region(Il2CppString* value) {
		return ((R (*)(GuildGlobalRating*, Il2CppString*))(Il2CppBase() + 0x1B257A4))(this, value);
	}
	template <typename R = bool> R Equals(Il2CppObject* other) {
		return ((R (*)(GuildGlobalRating*, Il2CppObject*))(Il2CppBase() + 0x1B25824))(this, other);
	}
	template <typename R = bool> R Equals_1(ProtoModels::GuildGlobalRating* other) {
		return ((R (*)(GuildGlobalRating*, ProtoModels::GuildGlobalRating*))(Il2CppBase() + 0x1B25894))(this, other);
	}
	template <typename R = int32_t> R GetHashCode() {
		return ((R (*)(GuildGlobalRating*))(Il2CppBase() + 0x1B25974))(this);
	}
	template <typename R = Il2CppString*> R ToString() {
		return ((R (*)(GuildGlobalRating*))(Il2CppBase() + 0x1B25ABC))(this);
	}
	template <typename R = void> R WriteTo(uintptr_t output) {
		return ((R (*)(GuildGlobalRating*, uintptr_t))(Il2CppBase() + 0x1B25B20))(this, output);
	}
	template <typename R = int32_t> R CalculateSize() {
		return ((R (*)(GuildGlobalRating*))(Il2CppBase() + 0x1B25CF8))(this);
	}
	template <typename R = void> R MergeFrom(ProtoModels::GuildGlobalRating* other) {
		return ((R (*)(GuildGlobalRating*, ProtoModels::GuildGlobalRating*))(Il2CppBase() + 0x1B25F7C))(this, other);
	}
	template <typename R = void> R MergeFrom_1(uintptr_t input) {
		return ((R (*)(GuildGlobalRating*, uintptr_t))(Il2CppBase() + 0x1B26048))(this, input);
	}

};

}
